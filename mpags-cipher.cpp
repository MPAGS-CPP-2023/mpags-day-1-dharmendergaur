#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    const vector<string> cmdLineArgs {argv, argv+argc };
    if(argc==1){
        cout<<"No command line input."<<endl;
    }
    bool isKnownArgument = false;
    const vector<string> knownArguments = {"-h", "-V", "--version", "--help", "-i", "-o"};


    for(int i = 0; i < argc; i++){
        if(cmdLineArgs[i] == "-h" ||cmdLineArgs[i] == "--help"){
            cout << "You've reached the help desk! \033[32mHow can we help you?\033[0m" << endl;
        }
        if(cmdLineArgs[i] == "-i"){
            string input_file = cmdLineArgs[i+1];
            cout << "Input File is: "<< input_file << endl;
        }
        if(cmdLineArgs[i] == "-o"){
            string output_file = cmdLineArgs[i+1];
            cout << "Output File is: "<< output_file << endl;
        }
        if(cmdLineArgs[i] == "-V" || cmdLineArgs[i] == "--version"){
            cout << "Version: X.Y.Z"<< endl;
        }
        for (const string &arg : knownArguments) {
        if (cmdLineArgs[i] == arg) {
        isKnownArgument = true;
         }
        }
    }
    if (!isKnownArgument) {
    cout << "\033[31m Unknown Argument.\033[0m" << endl;
    }

    char in_char{'x'};
  string out_str{""};
cout << "\033[31m Enter Input: \033[0m" << endl;
  // Take letter from input:
  while(cin>>in_char)
  {
    if(isalpha(in_char))
    {
      out_str+=toupper(in_char);
      continue;
    }

    switch (in_char)
    {
    case '0':
      out_str+="ZERO";
      break;
    case '1':
      out_str+="ONE";
      break;
    case '2':
      out_str+="TWO";
      break;
    case '3':
      out_str+="THREE";
      break;
    case '4':
      out_str+="FOUR";
      break;
    case '5':
      out_str+="FIVE";
      break;
    case '6':
      out_str+="SIX";
      break;
    case '7':
      out_str+="SEVEN";
      break;
    case '8':
      out_str+="EIGHT";
      break;
    case '9':
      out_str+="NINE";
      break;
    default:
      break;
    }
  }
  cout << out_str << endl;

    return 0;
}
