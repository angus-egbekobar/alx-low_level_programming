# C - Structures, typedef #
# Resources #
### Read or watch: ###
- [0x0d. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230321%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230321T191510Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=6a570058b0100598f304ee8cc6c0137571ac535bcfa4ff3ee4bb64645e027b6e)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
- [0x0d. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230321%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230321T191956Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=c331577edfe15a303c76e62c93fa0ee06d0b0e6529074a8869490d1b28c0ef80)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- [The Lost Art of C Structure Packing (Advanced - not mandatory)](http://www.catb.org/esr/structure-packing/)
# Tasks #
### 0. Poppy ###
#### Define a new type struct dog with the following elements: ####
- name, type = char *
- age, type = float
- owner, type = char *
### 1. A dog is the only thing on earth that loves you more than you love yourself ###
#### Write a function that initialize a variable of type struct dog ####
### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad ###
#### Write a function that prints a struct dog ####
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If If d is NULL print nothing.
### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read ###
#### Define a new type dog_t as a new name for the type struct dog. ####
### 4. A door is what a dog is perpetually on the wrong side of ###
#### Write a function that creates a new dog. ####
- You have to store a copy of name and owner
- Return NULL if the function fails
### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg ###
#### Write a function that frees dogs. ####
