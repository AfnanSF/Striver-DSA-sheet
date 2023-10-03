int assignCookie(vector<int> &greed, vector<int> &size) {
	// Write your code here.
	sort(greed.begin(), greed.end());
	sort(size.begin(), size.end());

	int i = greed.size();
	int j = size.size();

	int a = 0;
	int b = 0;
    
	int count = 0;

	while(a < i && b < j)
	{
       if(greed[a] <= size[b])
	   {
		   a++;
		   b++;
		   count++;
	   }

	   else
	   {
		   b++;
	   }
	}

	return count;
}

