set grid
plot [0:2*pi] exp(-x)
replot [0:2*pi] -exp(-x) title "-exp(-x)"
replot "derivative.dat" every ::1 using 1:2 with lines title "exp(-x) num"
replot "derivative.dat" every ::1 using 1:3 with lines title "-exp(-x) num"
