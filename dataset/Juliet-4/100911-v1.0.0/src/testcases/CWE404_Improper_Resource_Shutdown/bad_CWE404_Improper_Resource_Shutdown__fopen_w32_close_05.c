static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(staticTrue)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}
