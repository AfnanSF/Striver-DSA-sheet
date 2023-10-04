vector<int> MinimumCoins(int n) {

  vector<int> arr;
  while (n > 0) {
    if (n >= 1000) {
      n -= 1000;
      arr.push_back(1000);

    } else if (n >= 500) {
      n -= 500;
      arr.push_back(500);

    } else if (n >= 100) {
      n -= 100;
      arr.push_back(100);

    } else if (n >= 50) {
      n -= 50;
      arr.push_back(50);

    } else if (n >= 20) {
      n -= 20;
      arr.push_back(20);

    } else if (n >= 10) {
      n -= 10;
      arr.push_back(10);

    } else if (n >= 5) {
      n -= 5;
      arr.push_back(5);

    } else if (n >= 2) {
      n -= 2;
      arr.push_back(2);

    } else if (n >= 1) {
      n -= 1;
      arr.push_back(1);
    }
  }
  return arr;
}
