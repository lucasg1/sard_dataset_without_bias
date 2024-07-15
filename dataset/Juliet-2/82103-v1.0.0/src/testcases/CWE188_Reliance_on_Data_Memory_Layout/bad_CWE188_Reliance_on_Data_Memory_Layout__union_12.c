void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            union
            {
                struct
                {
                    char charFirst, charSecond, charThird, charFourth;
                } structChars;
                long longNumber;
            } unionStructLong;
            unionStructLong.longNumber = 0x10203040;
<START>
            unionStructLong.structChars.charFourth |= 0x80; 
<END>
            printIntLine(unionStructLong.longNumber);
        }
    }
    else
    {
        {
            long longNumber;
            longNumber = 0x10203040;
            longNumber |= LONG_MIN;
            printIntLine(longNumber);
        }
    }
}
