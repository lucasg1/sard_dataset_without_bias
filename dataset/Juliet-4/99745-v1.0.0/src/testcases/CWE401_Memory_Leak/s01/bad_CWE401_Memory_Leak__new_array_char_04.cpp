static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
<END>
        ; 
    }
}
} 
