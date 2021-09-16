## TEST PLANS
| Test ID | DESCRIPTION | INPUT | OUTPUT | STATUS |
| :----: | :---: | :---: | :---: | :---: |
| TD_1 | If person exist | push button=1 | push button=1 | PASS |
| TD_2 | If person not exist | push button=0 | push button=0 | PASS |
| TD_3 | Temperature Request | Temp=0 | heater=Off | PASS |
| TD_4 | Temperature Request | Temp=20 | heater=20 deg generate | PASS |
| TD_5 | Temperature Request | Temp=25 | heater=25 deg generate | PASS |
| TD_6 | Temperature Request | Temp=29 | heater=29 deg generate | PASS |
| TD_7 | Temperature Request | Temp=33 | heater=33 deg generate | PASS |
| TD_8 | LED ON | Button=1 && Heater=1 | LED=1 | PASS |
| TD_9 | LED OFF |	Button=0 && Heater=0 | LED=0 | PASS |
| TD_10 | LCD Display | 20 deg cel | 20 deg Cel | PASS |