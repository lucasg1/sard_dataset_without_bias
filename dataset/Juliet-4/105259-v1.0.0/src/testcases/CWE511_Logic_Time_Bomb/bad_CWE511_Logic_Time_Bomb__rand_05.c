static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
<START>
            UNLINK("important_file.txt");
<END>
        }
    }
}
