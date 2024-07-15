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
        data = new twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
    }
    if(staticTrue)
    {
<START>
<END>
        ; 
    }
}
} 
