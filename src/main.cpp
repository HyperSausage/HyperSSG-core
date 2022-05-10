/*
Can't figure out how the code works? You are very strange... Read the documentation!
God, the code is written almost for children...
*/

#include "hammer.cpp"

#include "includeQ.h"

class wItA { // what is this argument 
  public:
    wItA() {
      rez = 0;
    };
  std::string operate(std::string argv) { // we could use Switch, but we know that it doesn't take on a string, so we didn't want to mess with string hashing and other unnecessary crap.
    if (argv == "./main") {
      return 0;
    } if (rez > 3) {
      std::cout <<
        "ERROR_01: too many translation parameters" <<
        std::endl;
      return 0;
    } if (argv == list[0]) { // HYPER-COMPRESSION
      rez++;
      hamm.hSSG();
      Log += argv;
    } if (argv == list[1]){ // DEFAULT
	  rez++;
	  Log += argv;
    } if (argv == list[2]) { // JSON
      hamm.jForm();
      rez++;
      Log += argv;
    } if (argv == list[3]) { // XML
      hamm.xForm();
      rez++;
      Log += argv;
    } if (argv == list[4]) { // YAML
      hamm.yForm();
      rez++;
      Log += argv;
    } else { // DEFAULT
      rez++;
      if (argv != list[1]) {
        hamm.giveFileName(argv);
      }
    }
    return Log;
  }
  private:
    HAMMER hamm;
  int rez;
  char * termPhase[5];
  std::string list[5] = {
    "-h",
    "-d",
    "-j",
    "-x",
    "-y"
  };
  std::string Log;
  std::string rezArgc[2];
};

int main(int argc, char ** argv) {
  wItA checkP; // check parameter
  for (int i = 0; i < argc; i++) {
    checkP.operate(argv[i]);
  }
}