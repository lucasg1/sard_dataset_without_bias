static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(staticTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
