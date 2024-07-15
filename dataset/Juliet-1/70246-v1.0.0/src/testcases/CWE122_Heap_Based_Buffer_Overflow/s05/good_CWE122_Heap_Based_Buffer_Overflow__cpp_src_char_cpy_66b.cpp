namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = new char[100];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
        delete [] data;
    }
}
} 
