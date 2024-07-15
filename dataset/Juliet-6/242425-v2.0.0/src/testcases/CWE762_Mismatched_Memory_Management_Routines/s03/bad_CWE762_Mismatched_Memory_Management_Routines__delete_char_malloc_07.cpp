static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
<START>
        delete data;
<END>
    }
}
} 
