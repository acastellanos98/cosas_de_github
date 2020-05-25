#!/bin/pythpn

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt; plt.style.use('seaborn')

datos = pd.read_csv('datos.csv')

plt.figure(figsize=(5,5))
plt.plot('t', 'y', data=datos)
plt.xlabel('t (s)')
plt.ylabel('y (m)')
plt.title('Tiempo vs Posición')
plt.savefig('grafico.pdf')