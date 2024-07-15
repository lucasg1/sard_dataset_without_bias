using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> countVector);
void FUN1()
{
    int count;
    vector<int> countVector;
    count = -1;
    count = 20;
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    FUN0(countVector);
}
void FUN2(vector<int> countVector);
void FUN3()
{
    int count;
    vector<int> countVector;
    count = -1;
    fscanf(stdin, "%d", &count);
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    FUN2(countVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> countVector)
{
    int count = countVector[2];
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN2(vector<int> countVector)
{
    int count = countVector[2];
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
} 
