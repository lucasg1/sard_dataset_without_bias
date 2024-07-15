static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        fwrite((char *)"string", sizeof(char), strlen("string"), stdout);
<END>
    }
}
