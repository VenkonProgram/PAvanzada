Problem:
You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table, where the keys are words and the values are the number of times the words occurred.

Think about capitalized words. For example, look at these sentences:

"After beating the eggs, Dana read the next step:"
"Add milk and eggs, then add flour and sugar."

What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of 2.

Make reasonable (not necessarily perfect) decisions about cases like "After" and "Dana".

Break down:
Update function for the class hash, a function that reads text and a functions that iterates through the table and every word will be converted to lowercase and every special character and punctuation won't matter at the end it show the results.

Solution:
It would be inserting each word in the table and update if it's repeated
