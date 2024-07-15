static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            int count = 0;
            do
            {
                if (count == COUNT_CHECK)
                {
<START>
                    UNLINK("important_file.txt");
<END>
                }
                count++;
            }
            while(1 == 1);   
        }
    }
}
