Proje 2
[16,21,11,8,12,22] -> Merge Sort

Yukarýdaki dizinin sort türüne göre aþamalarýný yazýnýz.
Big-O gösterimini yazýnýz.



Diziyi Merge Sort türüne göre sýralayacaksak ilk önce diziyi parçalamalýyýz.
[16,21,11]  [8,12,22]
Daha sonra parçaladýðýmýz dizileri de parçalamalýyýz.
[16] [21,11]  [8,12] [22]
Tek bir sayýnýn olduðu gruplara ulaþýldýðýnda gruplar birleþtirilir. Ancak küçük olan sayýlar ilk önce yazýlýr.
[16] [11,21]  [8,12] [22]
[11,16,21]  [8,12,22]
[8,11,12,16,22]

Toplamda 6 iþlem yapýldýðý için Big-O gösterimi --> O(nlogn) --> O(6log6)
