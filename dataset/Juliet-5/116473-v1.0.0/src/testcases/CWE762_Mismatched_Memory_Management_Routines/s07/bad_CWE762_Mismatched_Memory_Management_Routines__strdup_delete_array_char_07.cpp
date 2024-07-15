static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(staticFive==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
