static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(staticTrue)
    {
<START>
<END>
        ; 
    }
}
