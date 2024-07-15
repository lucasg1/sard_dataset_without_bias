static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
    {
        data = NULL;
        data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
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
