# libft
My work for 42 School, Contains a library designed for the work later assigned in the cursus.

I have learnt alot about the logic involved in maipulating strings,
I have also learnt about linked lists.

My grade for the project was 120 out of 100.


ft_substr will segfault on fsoares own test (No. 4) (KO segfault) using the francinette tester,
ft_substr("hola", 4294967295, 0): Segmentation Fault, I have not tested if moulinette is okay with this, but i would say so.
If you want a definite pass for substr, remove the helper function and malloc using len + 1, which will allocate too much memory in some cases. I have not found a fix for passing this test, although i see no reason to do that.
