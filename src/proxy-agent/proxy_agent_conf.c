#include <stdbool.h>
#include "proxy_agent_conf.h"

static const int                  default_host_port = 9001;
static const enum lws_log_levels  default_log_level = LLL_USER | LLL_ERR | LLL_WARN | LLL_NOTICE;

bool ws_initconf(struct proxy_conf_t * conf, int argc, char *argv[])
{
  conf->e2args = init_fr_args(argc, argv);
  conf->retry_count = 0;

  conf->port = default_host_port;
  char* amr_ip = get_conf_amr_ip(&conf->e2args);
  strncpy(conf->address, amr_ip, strlen(amr_ip));
  printf("[E2 Agent]: get amr-ran ip %s from conf\n", amr_ip);
  char *envar = getenv("WS_RAN_HOST");
  if (envar)
  {
    printf("Environment variable WS_RAN_HOST caught\n");
    char *p = strtok(envar, ":");
    if (p != NULL) {
      strncpy(conf->address, p, sizeof(conf->address));
      p = strtok(NULL, " ");
      if (p)
        conf->port = atoi(p);
    }else 
      strncpy(conf->address, envar, sizeof(conf->address));
  } 

  conf->logl = default_log_level; 
  envar = getenv("WS_LOGL");
  if (envar)
  { 
    printf("Environment variable WS_LOGL caught\n");
    conf->logl = atoi(envar);
  }
  
  return true;
}

void ws_initconf_print_help(void){

  printf(
  "Configuration help for WS interface.\n"\
  "\n"\
  "Configuration is affected by environment variables WS_RAN_HOST and WS_LOGL, otherwise defaults apply\n"\
  "WS_RAN_HOST=ranhostname[:port]. If port is not specified, it will use the default\n"\
  "WS_LOGL=bitmask. Bitmask is composed of OR values: LLL_ERR(1), LLL_WARN(1 << 1), LLL_NOTICE(1 << 2), LLL_INFO(1 << 3), LLL_DEBUG(1 << 4), LLL_PARSER(1 << 5), LLL_HEADER(1 << 6), LLL_EXT(1 << 7), LLL_CLIENT(1 << 8), LLL_LATENCY(1 << 9), LLL_USER(1 << 10), LLL_THREAD(1 << 11)\n"\
  "Defaults: ranhostname=localhost, port=%d, loglevel=%d (LLL_USER | LLL_ERR | LLL_WARN | LLL_NOTICE)\n", 
  default_host_port, default_log_level);
}

void ws_conf_print(struct proxy_conf_t * c) 
{ 
  printf(
  "configuration used:\n"\
  "- retry_count:%d\n"\
  "- RAN ip address:%s\n"\
  "- RAN port:%d\n"\
  "- LogLevel:%d\n"\
  "- E2 conf file (%s) and SM lib dir (%s)\n"\
  , c->retry_count, c->address, c->port, c->logl, c->e2args.conf_file,c->e2args.libs_dir);     
}