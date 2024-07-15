static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
