using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector);
void FUN1()
{
    char * data;
    vector<char *> dataVector;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector)
{
    char * data = dataVector[2];
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _spawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}
} 
