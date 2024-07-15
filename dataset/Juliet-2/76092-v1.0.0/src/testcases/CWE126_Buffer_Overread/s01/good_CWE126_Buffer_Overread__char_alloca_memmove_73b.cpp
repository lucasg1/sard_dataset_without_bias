using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList);
void FUN1()
{
    char * data;
    list<char *> dataList;
    char * VAR1 = (char *)ALLOCA(50*sizeof(char));
    char * VAR2 = (char *)ALLOCA(100*sizeof(char));
    memset(VAR1, 'A', 50-1); 
    VAR1[50-1] = '\0'; 
    memset(VAR2, 'A', 100-1); 
    VAR2[100-1] = '\0'; 
    data = VAR2;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList)
{
    char * data = dataList.back();
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memmove(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
} 
