# -*- coding: UTF-8 -*-
import random

fi = open("./raw_namelist.csv", "r")
raw_namelist = fi.read()
fo = open("./source_table.csv", "w")
fo.write(
    '''姓名,班级,学号,语文,数学,英语,物理,化学,生物,政治,地理,体育,美术,音乐,概率,创科,数据,马原\n''')

namelist = raw_namelist.split(',')
namelist = random.sample(namelist, 1000)
id_prefix = 180
id_class = 100
id_suffix = 1
for i, j in enumerate(namelist):
    fo.write(j + ',' + str(id_class) + '班' + ',' + str('%d%d%03d' % (id_prefix, id_class, id_suffix)))
    id_suffix += 1
    if id_suffix >= 51:
        id_suffix = 1
        id_class += 1
    for j in range(15):
        k = random.randint(40, 130)
        if k <= 100:
            fo.write(",%d" % k)
        else:
            fo.write(",")

    fo.write("\n")

fi.close()
fo.close()

input()