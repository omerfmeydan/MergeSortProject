Proje 2
[16,21,11,8,12,22] -> Merge Sort

Yukar�daki dizinin sort t�r�ne g�re a�amalar�n� yaz�n�z.
Big-O g�sterimini yaz�n�z.



Diziyi Merge Sort t�r�ne g�re s�ralayacaksak ilk �nce diziyi par�alamal�y�z.
[16,21,11]  [8,12,22]
Daha sonra par�alad���m�z dizileri de par�alamal�y�z.
[16] [21,11]  [8,12] [22]
Tek bir say�n�n oldu�u gruplara ula��ld���nda gruplar birle�tirilir. Ancak k���k olan say�lar ilk �nce yaz�l�r.
[16] [11,21]  [8,12] [22]
[11,16,21]  [8,12,22]
[8,11,12,16,22]

Toplamda 6 i�lem yap�ld��� i�in Big-O g�sterimi --> O(nlogn) --> O(6log6)
