#ifndef DOWNLINK_H_
#define DOWNLINK_H_

#include "globaldefs.h"

void init_telemetry();
void send_telemetry(struct sensordata *sensorData);


#endif
