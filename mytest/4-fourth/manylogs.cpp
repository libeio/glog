
#include <glog/logging.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string>

#include <time.h>
#include <sys/time.h>

// string MODE = "";
// string FILESEP = "";

const std::string GetXDate()
{
    return "XDXD";
}

void init_log(const char * name)
{
    google::InitGoogleLogging(name);
    FLAGS_log_dir = "./";
    FLAGS_colorlogtostderr = true;
    FLAGS_logbufsecs = 10;
    FLAGS_max_log_size = 100;
    FLAGS_stop_logging_if_full_disk = true;
    google::SetStderrLogging(google::GLOG_INFO);
}

int main(int argc, char **argv)
{
    init_log(std::string("TEST").c_str());

    LOG(WARNING) << "GetXDate " << " Huo Pao " << GetXDate();

    return 0;
}
