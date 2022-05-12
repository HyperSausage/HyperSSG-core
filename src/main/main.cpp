/*
Can't figure out how the code works? You are very strange... Read the documentation!
God, the code is written almost for children...
*/

#include "../convert/hammer.cpp"

#include "../headers/includeQ.h"



class wItA { // what is this argument 
  public:
    wItA() {
      rez = 0;
    };
  std::string operate(std::string argv) { // we could use Switch, but we know that it doesn't take on a string, so we didn't want to mess with string hashing and other unnecessary crap.
    switch (rez) {
    case 0:
      if (argv == list[1]) { // DEFAULT
        rez += 1;
        Log += argv;
      }
      if (argv == list[2]) { // JSON
        rez += 1;
        hammer.jForm();
        Log += argv;
      }
      if (argv == list[3]) { // XML
        rez += 1;
        hammer.xForm();
        Log += argv;
      }
      if (argv == list[4]) { // YAML
        rez += 1;
        hammer.yForm();
        Log += argv;
      }
      break;
    case 1:
      if (argv == list[1] ||
        argv == list[2] ||
        argv == list[3] ||
        argv == list[4]) {
        std::cout <<
          "ERROR_01: too many translation parameters" << std::endl <<
          "Only one parameter is allowed: -j/-x/-y/-d" << std::endl;
        return 0;
      }
      if (argv == list[0]) { // HYPER-COMPRESSION
        hammer.hSSG();
        Log += argv;
      } else { // DEFAULT
        if (argv != list[1]) {
          hammer.giveFileName(argv);
          Log += argv;
        }
      }
      break;
    }

    return Log;
  }
  std :: string getLogRezult(){
	  return hammer.LogOut();
  }
  private:
  HAMMERinstruct hammer;
  int rez;
  std :: string getFalse;
  std::string Log;
  std::string list[5] = {
    "-h", // [0]
    "-d", // [1]
    "-j", // [2]
    "-x", // [3]
    "-y"  // [4]
  };
  std::string rezArgc[2];
};
int main(int argc, char ** argv) {
  wItA checkP; // check parameter
  for (int i = 0; i < argc; i++) {
    if (argv[i] != * argv)
      checkP.operate(argv[i]);
  }
  std :: cout << checkP.getLogRezult();
  
}