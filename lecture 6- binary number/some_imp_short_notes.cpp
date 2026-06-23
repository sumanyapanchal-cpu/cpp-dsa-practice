/*

jese hum maths me 1+1=2 likhte hai
ab binary form me toh 2 exisy nhi krta but binary form me 2 = 10 hota hai
toh 1+1=10 in binary (also agar ye vertically ho 1+1= 10 toh 1 carryover bh ho jata h just like usual)

TWO'S COMPLEMENT TO CALCULATE BINARY NUMBER OF -VE/+VE BOTH NUMBERS
say n = -10 convery into binary
STEP 1.) - convery 10 into binary form --> 1010
STEP 2.) prefix with a zero--> 0 1010 (01010 aise)
STEP 3.) 1'S COMPONENT CALCULATE-- THAT IS TO FLIP ALL 0 WIHT 1 AND 1 WITH 0
             --> 10101

STEP 4.) add +1 to the step 3
      1
1 0 1 0 1
+       1                          (1+1--> 10 and 1 carry over)
----------
1 0 1 1 0 // ans final and is called the two's compliment of a number

and isme se the first digit of final ans is called MOST SIGNIIFICANT BIT (MSB)
TOH IF MSB -->1 MEANS -VE NUMBER AND VICCE VERSA'


now case 2. what if alreayd ek number ho humare pas nd humko ye bhi pta ho ki wo -ve hai ya +ve to
usko wapis binary to decimal kese convert krege?

eg- given 10110 is a -ve number find its decimal number

step 1.) find one's compliment- sbko flip krdo
01001

step 2. add +1
      1
0 1 0 0 1
+       1
----------
 0  1  0  1 0 -- and now 1010 we knwo is 10 isliye ye number -10 hai since already ye bh known tha ki number -ve hai 
*/