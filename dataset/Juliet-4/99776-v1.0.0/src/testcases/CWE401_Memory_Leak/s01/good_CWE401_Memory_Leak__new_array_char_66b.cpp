namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    char VAR1[100];
    data = VAR1;
    strcpy(data, "A String");
    printLine(data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char * dataArray[]);
void FUN3()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
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
    delete[] data;
}
} 
