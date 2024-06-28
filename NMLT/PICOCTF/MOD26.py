flag = "cvpbPGS{arkg_gvzr_V'yy_gel_2_ebhaqf_bs_ebg13_MAZyqFQj}"

AZ = "ABCDEFGHJKLMNOPRSTUVWXZ"

az = "abcdefghjklmnoprstuvwxz"

s = ""
for x in flag:
	if x in AZ:
		s += AZ[(AZ.index(x) + 13) % len(AZ)]
	elif x in az:
		s += ax[(az.index(x) + 13) % len(az)]
	else 
		s += x;
print(S);



