/*
Can't figure out how the code works? You are very strange... Read the documentation!
God, the code is written almost for children...
*/

#include "includeQ.h"

#include <cstring>

class wItA { // what is this argument 
  public:
    wItA() {
      rez = 0;
      HAMMER * hamm;
      for (int i = 0; i < 5;)
        termPhase[i] = const_cast < char * > (list[i].c_str());
    };
  public:
    constexpr uint32_t hash(const char * data, size_t
      const size) noexcept {
      uint32_t hash = 5381;

      for (const char * c = data; c < data + size; ++c)
        hash = ((hash << 5) + hash) + (unsigned char) * c;

      return hash;
    } // This function is needed to compare command-line arguments with args, the fact is that switch does not accept a string, because of this the hash is compared.
  bool operate(std::string argv) {

    char * argvC = const_cast < char * > (argv.c_str());
    if (argv == "./main") {
      return 0;
    }
    if (rez > 4) {
      std::cout <<
        "ERROR_01: too many translation parameters" <<
        std::endl;
      return 0;
    }
    switch (hash(argvC)) {
    case hash(termPhase[0]): // HYPER-COMPRESSION
      rez++;
      hamm.hSSG();
      break;
    case hash(termPhase[1]): // DEFAULT
      rez++;
    case hash(termPhase[2]): // JSON
      hamm.jForm();
      rez++;
    case hash(termPhase[3]): // XML
      hamm.xForm();
      rez++;
    case hash(termPhase[4]): // YAML
      hamm.yForm();
      rez++;
    default: // DEFAULT
      rez++;
      if (argv != "-d") {
        hamm.giveFileName(argv);
      }
      break;
    }
  }
  private:
    int rez;
  char * termPhase[5];
  std::string list[5] = {
    "-h",
    "-d",
    "-j",
    "-x",
    "-y"
  };
  std::string rezArgc[2];
};

int main(int argc, char ** argv) {
  wItA checkP; // check parameter
  for (int i = 0; i < argc; i++) {
    checkP.operate(argv[i]);
  }
}