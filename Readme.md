Comment démarrer ce challenge
===

Prérequis
---

* Un linux 64 bit
* De quoi compilé pour ce linux (gcc...)
* socat (pour bind le program au port 5555)


Comment faire
---
Dans un premier temps, compiler le programme:

```bash
chmod +x generate.sh
./generate.sh
```

Ensuite il suffit de le lancer: 

```bash
./rop
```

Dans un deuxième temps
---

Quand vous en serez à la partie attaque en remote, utilisez:

```bash
socat -d -d tcp-listen:5555,fork,reuseaddr exec:"./rop"
```
