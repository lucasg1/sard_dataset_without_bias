static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char;
        delete data;
    }
    if(staticFive==5)
    {
<START>
        delete data;
<END>
    }
}
} 
