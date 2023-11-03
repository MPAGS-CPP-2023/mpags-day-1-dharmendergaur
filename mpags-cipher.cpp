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
    return 0;
}