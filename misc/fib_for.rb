# フィボナッチ数列を求めるアルゴリズムを愚直再帰，メモ化再帰，for文でそれぞれ書き実行速度を比較する
# 所要時間: 合計20分
# 座席:右前

tbl = [0,1]
fib = -> (n) {
    n.times{|i|
        tbl[i % 2] = tbl[0] + tbl[1]
    }
    tbl[n % 2]
}
puts fib.(ARGV[0].to_i)