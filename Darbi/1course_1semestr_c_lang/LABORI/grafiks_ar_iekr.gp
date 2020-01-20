set samples 100
set xrange [0:2*pi]
f(x) = exp(-x)
set linetype 1 lc rgb '#A3001E'

set style fill transparent solid 0.35 noborder
filter(x,min,max) = (x > min && x < max) ? x : 1/0
plot '+' using (filter($1, 1, 4)):(f($1)) with filledcurves x1 lt 1 notitle,\
''  using 1:(f($1)) with lines lw 3 lt 1 title ''


