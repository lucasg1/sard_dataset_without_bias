namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    char VAR1;
    data = &VAR1;
    *data = 'A';
    printHexCharLine(*data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char * dataArray[]);
void FUN3()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    ; 
}
void FUN2(char * dataArray[])
{
    char * data = dataArray[2];
    delete data;
}
} 
