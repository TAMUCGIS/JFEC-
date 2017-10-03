#include "imgproc.h"

static cl_uint nplatforms;
static cl_uint ndevices;
static cl_platform_id* platforms;
static cl_platform_id  platform;
static cl_device_id* devices;
static cl_device_id dev;
static cl_context ctx;
static cl_command_queue cmdq;
static cl_program prg;
static cl_kernel krn;
