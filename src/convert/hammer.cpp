#include "../headers/includeQ.h"

class HAMMER{};

class HAMMERinstruct {
  public:
  HAMMERinstruct(){
	  LogRezult = "";
  };
  void giveFileName(std::string argc) {
    LogRezult += "_";
	LogRezult += argc;
	LogRezult += "_";
  }
  void hSSG() {
    LogRezult += "hSSG";
  }
  void jForm() {
    LogRezult += "jSSG";
  }
  void xForm() {
    LogRezult += "xSSG";
  }
  void yForm() {
    LogRezult += "ySSG";
  }
  std :: string LogOut() {
	std :: cout << "LOG: " << LogRezult <<
	"- SUCCEED! :)" << std :: endl;
	return "";
  }
  private:
  std :: string LogRezult;
  std :: string getFalse;
};