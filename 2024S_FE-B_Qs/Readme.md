# ITPEC FE-PM / 2024S_FE-B_Q's Answers 

**Counting the represent of 1 _(bitwise)_**
[2024S_FE-B_Q6.cpp](2024S_FE-B-Q6.cpp)

**_Fibonacci Sequence_** သုံးထားတဲ့ ပုဒ်စာ
[2024S_FE-B_Q7.cpp](2024S_FE-B-O7.cpp)

**_Stack_** သုံးထားတဲ့ ပုဒ်စာ
[2024S_FE-B_Q8.cpp](2024S_FE-B_Q8.cpp)

**_Binary Tree_** ကိုမှ **stack (FIFO)** သုံးထားတဲ့ ပုဒ်စာ
[2024S_FE-B_Q9.cpp](2024S_FE-B-Q9.cpp)

**_Linked List_**
[2024S_FE-B_Q10.cpp](2024S_FE-B_Q10.cpp)

**_Selection sorting_** ကိုသုံးထားတဲ့ ပုဒ်စာ
[2024S_FE-B_Q11.cpp](2024S_FE-B_Q11.cpp)

**_Palindrome_** + while loop condition
[2024S_FE-B_Q12.cpp](2024S_FE-B_Q12.cpp)

**_A Stack of Characters_** ပုဒ်စာ ~~A little bit harder!~~
[2024S_FE-B_Q13.cpp](2024S_FE-B_Q13.cpp)

**_Vector Similarity Calculation_** 
[2024S_FE-B_Q14.cpp](2024S_FE-B_Q14.cpp)

**_Sliding window algorithm (Sliding algorithm)_**
[2024S_FE-B_Q15.cpp](2024S_FE-B_Q15.cpp)
<details>
"Sliding window algorithm ကို သုံးပြီး စာသားတွေထဲက N-gram တွေကို ထုတ်ပေးတဲ့ ပုစ္ဆာ ဖြစ်ပါတယ်။ NLP(Natural Language Processing) ရဲ့ အခြေခံ သဘောတရားတွေကို လေ့လာဖို့အတွက် အထောက်အကူပြုပါတယ်။"
<br/> <br/>
၁။ မေးခွန်း၏ ဆိုလိုရင်း (Problem Understanding)
N-grams ဆိုသည်မှာ စာကြောင်းတစ်ခုအတွင်း ဆက်တိုက်ဖြစ်ပေါ်နေသော စကားလုံးစုများ ဖြစ်သည်။ <br/>
Unigram (n=1): စကားလုံးတစ်လုံးချင်းစီ။ <br/>
Bigram (n=2): စကားလုံး နှစ်လုံးတွဲများ။ <br/>
Trigram (n=3): စကားလုံး သုံးလုံးတွဲများ။ <br/>
ကျွန်ုပ်တို့၏ ရည်ရွယ်ချက်မှာ မည်သည့် (n) တန်ဖိုးအတွက်မဆို မှန်ကန်သော စကားလုံးစုများကို Array Index အမှားမရှိဘဲ ထုတ်ပေးနိုင်မည့် Loop Boundaries (စတင်သည့်နေရာနှင့် ဆုံးသည့်နေရာ) ကို ရှာဖွေရန် ဖြစ်သည်။
<br/>
၂။ Algorithm ရှင်းလင်းချက် (Step-by-Step) <br/>
အဆင့် ၁: စာကြောင်းကို ခွဲထုတ်ခြင်း (Splitting)stringstream ကို အသုံးပြု၍ Space (ဟာကွက်) များအလိုက် စကားလုံးများကို တစ်လုံးချင်းစီ ခွဲထုတ်ပြီး vector (စာရင်း) ထဲသို့ သိမ်းဆည်းသည်။ <br/>
အဆင့် ၂: စတင်ရာနေရာကို သတ်မှတ်ခြင်း (Loop A)စကားလုံးများကို စတင်ယူမည့် နေရာကို ပတ်သည့် Loop ဖြစ်သည်။Logic: စာကြောင်း၏ အဆုံးနားတွင် (n) အရေအတွက် ပြည့်အောင် ကျန်ရှိနေမှသာ Window ကို ရွှေ့သည်။  (Formula: i <= length - n) <br/>
အဆင့် ၃: စကားလုံးများကို စုစည်းခြင်း (Loop B)သတ်မှတ်ထားသော စတင်ရာနေရာမှစ၍ (n) အရေအတွက် ပြည့်အောင် စကားလုံးများကို ဆွဲထုတ်ပြီး စာသားတစ်ခုအဖြစ် ပြန်လည်ပေါင်းစပ်သည်။Logic: လက်ရှိ (i) နေရာမှစ၍ (n) လုံးမြောက်အထိ ပေါင်းသည်။ 

၃။ ကုဒ်နမူနာ ကို ဒီ link မှ ကြည့် ပါ။ [2024S_FE-B_Q15.cpp](2024S_FE-B_Q15.cpp)

၄။ အဓိက သင်ခန်းစာ (Key Takeaway) <br/>
Index Management: C++ တွင် index သည် 0 မှ စတင်သဖြင့် ပတ်ရမည့် အကြိမ်အရေအတွက်မှာ length - n ထက် မပိုစေရန် သတိပြုရမည်။ <br/>
Efficiency: stringstream ကို အသုံးပြုခြင်းဖြင့် Manual String Parsing လုပ်ရသည့် အလုပ်ရှုပ်မှုကို လျှော့ချနိုင်သည်။
</details>
