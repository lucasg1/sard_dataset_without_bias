using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> countVector);
void FUN1()
{
    int count;
    vector<int> countVector;
    count = -1;
    fscanf(stdin, "%d", &count);
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    FUN0(countVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> countVector)
{
    int count = countVector[2];
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
} 
