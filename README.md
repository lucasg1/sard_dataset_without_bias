### Brief review of all techniques used to clean the SARD Juliet C/C++ 1.3 dataset

1. A vulnerability delimiter is written between the vulnerable lines. \<START\> is placed immediately before the vulnerability and \<END\> is placed after.
2. The directives #ifndef are used to separate "good" and "bad" files. Each test case has a "good" and a "bad" file.
3. The functions and variables names that may bias the outcome are changed to a generic name, obtaining a symbolic representation of these variables/function. The variables are changed to VAR0, VAR1, ...etc, and the functions are changed to FUN0, FUN1, ...etc. Note that not all functions/variables are represented in this way, just those that have bias in its name, for example those that have "good" and "bad" in its name.
4. All comments are removed
5. Finally, we noticed that the classes (vuln. or not vuln.) are biased by some data inside the code by two patterns. In this final step we remove these two patterns before training the model, these patterns are the static function and the "cascade" pattern that we define at the end of this page.

- Static function pattern:

These are two code snippets taken from the original SARD Juliet dataset:

<pre>
<span style="color:grey">/* bad function declaration */</span>
void CWE121_Stack_Based_Buffer_Overflow_dest_char_alloca_cat_51b_badSink (char * data);
void CWE121_Stack_Based_Buffer_Overflow_dest_char_alloca_cat_51_bad()
</pre>

<pre>
<span style="color:grey">/* good function declarations */</span>
void CWE121_Stack_Based_Buffer_Overflow_dest_char_alloca_cat_51b_goodG2BSink (char * data);
<span style="color:red">static</span> void goodG2B()
</pre>

The static function appears on 99,7% of the non vulnerable files, while it appears only on 8% of the vulnerable files.

- "Cascade" pattern:

This is a code snipper taken after the symbolic representation step:

<pre>
        ...
        }
        printLine(dest);
    }
}
<span style="color:red">void FUN2(){
    FUN0();
    FUN1();
}</span>
</pre>

The "cascade" pattern appears on 99,6% of the non vulnerable files, while it appears only on 0,01% of the vulnerable files