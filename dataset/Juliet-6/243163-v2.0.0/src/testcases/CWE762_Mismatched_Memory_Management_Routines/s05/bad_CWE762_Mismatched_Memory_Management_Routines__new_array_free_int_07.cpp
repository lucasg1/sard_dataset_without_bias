static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int[100];
    }
    if(staticFive==5)
    {
<START>
        free(data);
<END>
    }
}
} 
