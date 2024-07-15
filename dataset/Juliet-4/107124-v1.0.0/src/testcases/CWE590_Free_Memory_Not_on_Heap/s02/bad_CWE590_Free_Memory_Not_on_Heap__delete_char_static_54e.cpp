namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL; 
    {
        static char dataBuffer;
        dataBuffer = 'A';
        data = &dataBuffer;
    }
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN2(char * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data);
void FUN0(char * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data)
{
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
