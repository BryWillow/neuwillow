#include <memory>
//#include "../lib/spdlog/include/spdlog/spdlog.h"
//#include "../lib/spdlog/include/spdlog/common.h"
namespace neuWillow
{
  class Logger
  {
    public:
      static void initialize();
      //inline static shared_ptr<spdlog::logger>& getLogger() { return _logger; }

    private:
      //static std::shared_ptr<spdlog::logger> _logger; 
  };

  //#define LOG_INFO(Logger::getLogger()
}