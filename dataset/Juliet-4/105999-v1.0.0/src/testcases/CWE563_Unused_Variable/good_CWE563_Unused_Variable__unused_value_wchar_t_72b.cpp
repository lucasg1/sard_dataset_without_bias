using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<wchar_t> dataVector);
void FUN1()
{
    wchar_t data;
    vector<wchar_t> dataVector;
    data = L'W';
    printf("%02lx\n", data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<wchar_t> dataVector);
void FUN3()
{
    wchar_t data;
    vector<wchar_t> dataVector;
    data = L'W';
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<wchar_t> dataVector)
{
    wchar_t data = dataVector[2];
    data = L'Z';
    printf("%02lx\n", data);
}
void FUN2(vector<wchar_t> dataVector)
{
    wchar_t data = dataVector[2];
    printf("%02lx\n", data);
}
} 
