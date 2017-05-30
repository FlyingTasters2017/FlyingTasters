#!/usr/bin/env python
#
# Automatically generated Python sequence chart (MSC) implementation

import os
import sys
import signal
import Queue

taste_inst = os.popen('taste-config --prefix').readlines()[0].strip()
sys.path.append(taste_inst+'/share/asn1-editor')

from asn1_value_editor.Scenario import Scenario, PollerThread
from PySide.QtCore import QCoreApplication, Qt
from asn1_value_editor.udpcontroller import tasteUDP

# Generated due to "ground_trace_201705241132.msc"
# From the section: MSCDOCUMENT automade


@Scenario
def Exercise_ground(queue):
    '''ground processing'''
    try:
        queue.expectMsg('GetHeight', '0.590558097721', lineNo=1726, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374121297', lineNo=1727, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472296378', lineNo=1728, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852622966', lineNo=1729, ignoreOther=False)
    except TypeError as err:
        raise
    queue.sendMsg('Takeoff', '{x 0.0, y 0.0, z 2.0, yaw 0.0}', lineNo=1730)
    try:
        queue.expectMsg('GetHeight', '0.86151510106', lineNo=1731, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245973066', lineNo=1732, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194330383', lineNo=1733, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871451611', lineNo=1734, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708984665', lineNo=1735, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706929545', lineNo=1736, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.5318405478', lineNo=1737, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663235136', lineNo=1738, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302827317', lineNo=1739, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277248008', lineNo=1740, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602421954', lineNo=1741, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558110505', lineNo=1742, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374152977', lineNo=1743, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472346955', lineNo=1744, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.46185269244', lineNo=1745, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515189431', lineNo=1746, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194340812', lineNo=1747, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871459665', lineNo=1748, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708990344', lineNo=1749, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865287177', lineNo=1750, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184053331', lineNo=1751, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663231311', lineNo=1752, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302821116', lineNo=1753, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602414935', lineNo=1754, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558044983', lineNo=1755, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374092122', lineNo=1756, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472290767', lineNo=1757, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852640919', lineNo=1758, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515142576', lineNo=1759, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979574', lineNo=1760, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337738', lineNo=1761, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871458265', lineNo=1762, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708990617', lineNo=1763, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865290798', lineNo=1764, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.1366323828', lineNo=1765, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302829759', lineNo=1766, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277249593', lineNo=1767, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558106669', lineNo=1768, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472323435', lineNo=1769, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852659078', lineNo=1770, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515146226', lineNo=1771, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194335612', lineNo=1772, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.9287145561', lineNo=1773, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708987433', lineNo=1774, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865286554', lineNo=1775, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184053853', lineNo=1776, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663232978', lineNo=1777, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302823928', lineNo=1778, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277243972', lineNo=1779, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558075909', lineNo=1780, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.28347231812', lineNo=1781, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852666484', lineNo=1782, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245981773', lineNo=1783, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871459089', lineNo=1784, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706933953', lineNo=1785, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865289123', lineNo=1786, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184056118', lineNo=1787, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234939', lineNo=1788, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825585', lineNo=1789, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245192', lineNo=1790, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558076431', lineNo=1791, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374115947', lineNo=1792, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.28347230697', lineNo=1793, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852649499', lineNo=1794, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515143535', lineNo=1795, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245978908', lineNo=1796, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194336542', lineNo=1797, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708988928', lineNo=1798, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932859', lineNo=1799, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288616', lineNo=1800, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663235605', lineNo=1801, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302826838', lineNo=1802, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277246793', lineNo=1803, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602420401', lineNo=1804, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558091597', lineNo=1805, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374130692', lineNo=1806, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472321293', lineNo=1807, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.4618526634', lineNo=1808, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515157013', lineNo=1809, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245980213', lineNo=1810, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337581', lineNo=1811, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457405', lineNo=1812, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989055', lineNo=1813, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865287832', lineNo=1814, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184054958', lineNo=1815, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302824687', lineNo=1816, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277244503', lineNo=1817, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602418453', lineNo=1818, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374118055', lineNo=1819, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852657602', lineNo=1820, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245980317', lineNo=1821, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457956', lineNo=1822, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706933431', lineNo=1823, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288907', lineNo=1824, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184056208', lineNo=1825, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302826286', lineNo=1826, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277246069', lineNo=1827, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419685', lineNo=1828, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558084512', lineNo=1829, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374123681', lineNo=1830, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314357', lineNo=1831, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852656539', lineNo=1832, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515150228', lineNo=1833, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979542', lineNo=1834, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337035', lineNo=1835, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457085', lineNo=1836, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708988961', lineNo=1837, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932662', lineNo=1838, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.5318405554', lineNo=1839, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234717', lineNo=1840, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.5230282572', lineNo=1841, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245608', lineNo=1842, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558083372', lineNo=1843, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374124277', lineNo=1844, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472316689', lineNo=1845, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852660607', lineNo=1846, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515156031', lineNo=1847, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245980296', lineNo=1848, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337803', lineNo=1849, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457711', lineNo=1850, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989444', lineNo=1851, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706933003', lineNo=1852, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288387', lineNo=1853, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055597', lineNo=1854, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234632', lineNo=1855, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825493', lineNo=1856, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245288', lineNo=1857, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558079977', lineNo=1858, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374120783', lineNo=1859, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472313096', lineNo=1860, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.86151515224', lineNo=1861, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979907', lineNo=1862, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337474', lineNo=1863, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457504', lineNo=1864, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.4070898936', lineNo=1865, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706933041', lineNo=1866, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288547', lineNo=1867, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055879', lineNo=1868, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663235036', lineNo=1869, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245857', lineNo=1870, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419558', lineNo=1871, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558084094', lineNo=1872, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472315646', lineNo=1873, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658681', lineNo=1874, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153223', lineNo=1875, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979927', lineNo=1876, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337424', lineNo=1877, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.928714574', lineNo=1878, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932827', lineNo=1879, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288279', lineNo=1880, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055556', lineNo=1881, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234659', lineNo=1882, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825587', lineNo=1883, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245428', lineNo=1884, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419216', lineNo=1885, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122431', lineNo=1886, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658728', lineNo=1887, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245980105', lineNo=1888, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337644', lineNo=1889, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457614', lineNo=1890, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989409', lineNo=1891, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693303', lineNo=1892, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288477', lineNo=1893, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055748', lineNo=1894, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234845', lineNo=1895, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825768', lineNo=1896, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245584', lineNo=1897, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419322', lineNo=1898, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082096', lineNo=1899, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122484', lineNo=1900, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314377', lineNo=1901, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852657777', lineNo=1902, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.4824597991', lineNo=1903, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337441', lineNo=1904, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457444', lineNo=1905, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989273', lineNo=1906, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932928', lineNo=1907, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288408', lineNo=1908, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055713', lineNo=1909, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.523028258', lineNo=1910, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245641', lineNo=1911, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419386', lineNo=1912, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082822', lineNo=1913, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412329', lineNo=1914, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472315263', lineNo=1915, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658743', lineNo=1916, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153729', lineNo=1917, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245980022', lineNo=1918, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433754', lineNo=1919, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457512', lineNo=1920, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932931', lineNo=1921, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288379', lineNo=1922, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055652', lineNo=1923, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.1366323475', lineNo=1924, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825674', lineNo=1925, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245502', lineNo=1926, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419265', lineNo=1927, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558081783', lineNo=1928, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122423', lineNo=1929, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.28347231457', lineNo=1930, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658223', lineNo=1931, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153382', lineNo=1932, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245980005', lineNo=1933, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433754', lineNo=1934, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457528', lineNo=1935, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989341', lineNo=1936, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693298', lineNo=1937, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288444', lineNo=1938, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055734', lineNo=1939, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234848', lineNo=1940, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825789', lineNo=1941, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245617', lineNo=1942, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419358', lineNo=1943, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082494', lineNo=1944, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122914', lineNo=1945, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314839', lineNo=1946, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658271', lineNo=1947, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153209', lineNo=1948, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979965', lineNo=1949, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337489', lineNo=1950, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457477', lineNo=1951, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989289', lineNo=1952, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932927', lineNo=1953, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.5318405568', lineNo=1954, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234794', lineNo=1955, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825734', lineNo=1956, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419323', lineNo=1957, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082284', lineNo=1958, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122845', lineNo=1959, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314913', lineNo=1960, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658486', lineNo=1961, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153566', lineNo=1962, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245980015', lineNo=1963, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337542', lineNo=1964, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457522', lineNo=1965, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989327', lineNo=1966, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932957', lineNo=1967, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288413', lineNo=1968, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055694', lineNo=1969, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825732', lineNo=1970, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245561', lineNo=1971, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419312', lineNo=1972, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808214', lineNo=1973, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122666', lineNo=1974, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314699', lineNo=1975, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658238', lineNo=1976, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153283', lineNo=1977, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979983', lineNo=1978, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337513', lineNo=1979, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457501', lineNo=1980, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=1981, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932953', lineNo=1982, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288417', lineNo=1983, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055707', lineNo=1984, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825762', lineNo=1985, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245594', lineNo=1986, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419341', lineNo=1987, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082397', lineNo=1988, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122888', lineNo=1989, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658387', lineNo=1990, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153396', lineNo=1991, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979991', lineNo=1992, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337516', lineNo=1993, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.928714575', lineNo=1994, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989308', lineNo=1995, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932942', lineNo=1996, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288401', lineNo=1997, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055686', lineNo=1998, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234796', lineNo=1999, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245563', lineNo=2000, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419316', lineNo=2001, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082203', lineNo=2002, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122748', lineNo=2003, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.2834723148', lineNo=2004, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658358', lineNo=2005, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979999', lineNo=2006, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337528', lineNo=2007, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457512', lineNo=2008, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989321', lineNo=2009, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932956', lineNo=2010, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288416', lineNo=2011, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055701', lineNo=2012, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234812', lineNo=2013, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825748', lineNo=2014, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245578', lineNo=2015, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419327', lineNo=2016, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082274', lineNo=2017, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412278', lineNo=2018, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314793', lineNo=2019, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658312', lineNo=2020, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153337', lineNo=2021, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979987', lineNo=2022, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337514', lineNo=2023, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.928714575', lineNo=2024, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932947', lineNo=2025, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288409', lineNo=2026, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2027, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234808', lineNo=2028, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825746', lineNo=2029, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245578', lineNo=2030, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419329', lineNo=2031, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082299', lineNo=2032, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122818', lineNo=2033, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314843', lineNo=2034, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658375', lineNo=2035, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153413', lineNo=2036, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979996', lineNo=2037, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337523', lineNo=2038, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457506', lineNo=2039, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989315', lineNo=2040, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=2041, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055694', lineNo=2042, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234804', lineNo=2043, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.5230282574', lineNo=2044, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.7827724557', lineNo=2045, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419322', lineNo=2046, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082237', lineNo=2047, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122763', lineNo=2048, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314795', lineNo=2049, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658333', lineNo=2050, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2051, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457506', lineNo=2052, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989316', lineNo=2053, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932951', lineNo=2054, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288412', lineNo=2055, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055699', lineNo=2056, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.1366323481', lineNo=2057, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825747', lineNo=2058, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419328', lineNo=2059, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082289', lineNo=2060, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.28347231482', lineNo=2061, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=2062, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153376', lineNo=2063, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979991', lineNo=2064, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.23194337518', lineNo=2065, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989313', lineNo=2066, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932948', lineNo=2067, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288409', lineNo=2068, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234806', lineNo=2069, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825743', lineNo=2070, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245574', lineNo=2071, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419325', lineNo=2072, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082266', lineNo=2073, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2074, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658354', lineNo=2075, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153395', lineNo=2076, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979994', lineNo=2077, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457506', lineNo=2078, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989315', lineNo=2079, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2080, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.70865288411', lineNo=2081, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2082, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2083, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2084, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245574', lineNo=2085, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419325', lineNo=2086, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122782', lineNo=2087, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658338', lineNo=2088, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153376', lineNo=2089, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979992', lineNo=2090, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2091, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457504', lineNo=2092, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2093, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2094, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2095, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055697', lineNo=2096, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234808', lineNo=2097, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825745', lineNo=2098, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245576', lineNo=2099, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419327', lineNo=2100, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082278', lineNo=2101, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122796', lineNo=2102, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314819', lineNo=2103, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.46185265835', lineNo=2104, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153386', lineNo=2105, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2106, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2107, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457504', lineNo=2108, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2109, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=2110, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2111, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055695', lineNo=2112, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2113, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825743', lineNo=2114, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245574', lineNo=2115, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419325', lineNo=2116, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082264', lineNo=2117, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122785', lineNo=2118, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314812', lineNo=2119, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2120, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2121, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2122, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2123, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2124, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234808', lineNo=2125, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2126, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2127, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2128, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=2129, ignoreOther=False)
    except TypeError as err:
        raise
    queue.sendMsg('Takeoff', '{x 0.0, y 0.0, z 2.0, yaw 0.0}', lineNo=2130)
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2131, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2132, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2133, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2134, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2135, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2136, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=2137, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2138, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2139, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2140, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2141, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2142, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153385', lineNo=2143, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2144, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2145, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2146, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2147, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2148, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2149, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2150, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2151, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2152, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2153, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2154, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2155, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=2156, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2157, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2158, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2159, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2160, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2161, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2162, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2163, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2164, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=2165, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2166, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2167, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2168, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2169, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2170, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2171, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2172, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2173, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2174, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=2175, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2176, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2177, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2178, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2179, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2180, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2181, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2182, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2183, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2184, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2185, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2186, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2187, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2188, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2189, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2190, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2191, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=2192, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2193, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2194, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2195, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2196, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2197, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2198, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2199, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2200, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2201, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2202, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2203, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2204, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2205, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2206, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2207, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2208, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2209, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2210, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2211, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2212, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2213, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2214, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2215, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2216, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2217, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2218, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2219, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2220, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2221, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2222, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2223, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2224, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2225, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2226, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2227, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2228, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2229, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2230, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2231, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2232, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2233, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2234, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2235, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2236, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2237, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2238, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2239, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2240, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2241, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2242, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2243, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2244, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2245, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2246, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2247, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2248, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2249, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2250, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2251, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2252, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2253, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2254, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2255, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2256, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2257, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2258, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2259, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2260, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2261, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2262, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2263, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2264, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2265, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2266, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2267, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2268, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2269, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2270, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2271, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2272, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2273, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2274, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2275, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2276, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2277, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2278, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2279, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2280, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2281, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2282, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2283, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2284, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2285, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2286, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2287, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2288, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2289, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2290, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2291, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2292, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2293, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2294, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2295, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2296, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2297, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2298, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2299, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2300, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2301, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2302, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2303, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2304, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2305, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2306, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2307, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2308, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2309, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2310, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2311, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2312, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2313, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2314, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2315, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2316, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2317, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2318, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2319, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2320, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2321, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2322, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2323, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2324, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2325, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2326, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2327, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2328, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2329, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2330, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2331, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2332, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2333, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2334, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2335, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2336, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2337, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2338, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2339, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2340, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2341, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2342, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2343, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2344, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2345, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2346, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2347, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2348, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2349, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2350, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2351, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2352, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2353, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2354, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2355, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2356, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2357, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2358, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2359, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2360, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2361, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2362, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2363, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2364, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2365, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2366, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2367, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2368, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2369, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2370, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2371, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2372, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2373, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2374, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2375, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2376, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2377, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2378, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2379, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2380, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2381, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2382, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2383, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2384, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2385, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2386, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2387, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2388, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2389, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2390, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2391, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2392, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2393, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2394, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2395, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2396, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2397, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2398, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2399, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2400, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2401, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2402, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2403, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2404, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2405, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2406, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2407, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2408, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2409, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2410, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2411, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2412, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2413, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2414, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2415, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2416, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2417, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2418, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2419, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2420, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2421, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2422, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2423, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2424, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2425, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2426, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2427, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2428, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2429, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2430, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2431, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2432, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2433, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2434, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2435, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2436, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2437, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2438, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2439, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2440, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2441, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2442, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2443, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2444, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2445, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2446, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2447, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2448, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2449, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2450, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2451, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2452, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2453, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2454, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2455, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2456, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2457, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2458, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2459, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2460, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2461, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2462, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2463, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2464, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2465, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2466, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2467, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2468, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2469, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2470, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2471, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2472, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2473, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2474, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2475, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2476, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2477, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2478, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2479, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2480, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2481, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2482, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2483, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2484, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2485, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2486, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2487, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2488, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2489, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2490, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2491, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2492, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2493, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2494, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2495, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2496, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2497, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2498, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2499, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2500, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2501, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2502, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2503, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2504, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2505, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2506, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2507, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2508, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2509, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2510, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2511, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2512, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2513, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2514, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2515, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2516, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2517, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2518, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2519, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2520, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2521, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2522, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2523, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2524, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2525, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2526, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2527, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2528, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2529, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2530, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2531, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2532, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2533, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2534, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2535, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2536, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2537, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2538, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2539, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2540, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2541, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2542, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2543, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2544, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2545, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2546, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2547, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2548, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2549, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2550, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2551, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2552, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2553, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2554, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2555, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2556, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2557, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2558, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2559, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2560, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2561, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2562, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2563, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2564, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2565, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2566, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2567, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2568, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2569, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2570, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2571, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2572, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2573, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2574, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2575, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2576, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2577, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2578, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2579, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2580, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2581, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2582, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2583, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2584, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2585, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2586, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2587, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2588, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2589, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2590, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2591, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2592, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2593, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2594, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2595, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2596, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2597, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2598, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2599, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2600, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2601, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2602, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2603, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2604, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2605, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2606, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2607, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2608, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2609, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2610, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2611, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2612, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2613, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2614, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2615, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2616, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2617, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2618, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2619, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2620, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2621, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2622, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2623, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2624, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2625, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2626, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2627, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2628, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2629, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2630, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2631, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2632, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2633, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2634, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2635, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2636, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2637, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2638, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2639, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2640, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2641, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2642, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2643, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2644, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2645, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2646, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2647, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2648, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2649, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2650, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2651, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2652, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2653, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2654, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2655, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2656, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2657, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2658, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2659, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2660, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2661, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2662, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2663, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2664, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2665, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2666, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2667, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2668, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2669, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2670, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2671, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2672, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2673, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2674, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2675, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2676, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2677, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2678, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2679, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2680, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2681, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2682, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2683, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2684, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2685, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2686, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2687, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2688, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2689, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2690, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2691, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2692, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2693, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2694, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2695, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2696, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2697, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2698, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2699, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2700, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2701, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2702, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2703, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2704, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2705, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2706, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2707, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2708, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2709, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2710, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2711, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2712, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2713, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2714, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2715, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2716, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2717, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2718, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2719, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2720, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2721, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2722, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2723, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2724, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2725, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2726, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2727, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2728, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2729, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2730, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2731, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2732, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2733, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2734, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2735, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2736, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2737, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2738, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2739, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2740, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2741, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2742, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2743, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2744, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2745, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2746, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2747, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2748, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2749, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2750, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2751, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2752, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2753, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2754, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2755, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2756, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2757, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2758, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2759, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2760, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2761, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2762, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2763, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2764, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2765, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2766, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2767, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2768, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2769, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2770, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2771, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2772, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2773, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2774, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2775, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2776, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2777, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2778, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2779, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2780, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2781, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2782, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2783, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2784, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2785, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2786, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2787, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2788, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2789, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2790, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2791, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2792, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2793, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2794, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2795, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2796, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2797, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2798, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2799, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2800, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2801, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2802, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2803, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2804, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2805, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2806, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2807, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2808, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2809, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2810, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2811, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2812, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2813, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2814, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2815, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2816, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2817, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2818, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2819, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2820, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2821, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2822, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2823, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2824, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2825, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2826, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2827, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2828, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2829, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2830, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2831, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2832, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2833, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2834, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2835, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2836, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2837, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2838, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2839, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2840, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2841, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2842, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2843, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2844, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2845, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2846, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2847, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2848, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2849, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2850, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2851, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2852, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2853, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2854, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2855, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2856, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2857, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2858, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2859, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2860, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2861, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2862, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2863, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2864, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2865, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2866, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2867, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2868, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2869, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2870, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2871, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2872, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2873, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2874, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2875, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2876, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2877, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2878, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2879, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2880, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2881, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2882, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2883, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2884, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2885, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2886, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2887, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2888, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2889, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2890, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2891, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2892, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2893, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2894, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2895, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2896, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2897, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2898, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2899, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2900, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2901, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2902, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2903, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2904, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2905, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2906, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2907, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2908, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2909, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2910, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2911, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2912, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2913, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2914, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2915, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2916, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2917, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2918, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2919, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2920, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2921, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2922, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2923, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2924, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2925, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2926, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2927, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2928, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2929, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2930, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2931, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2932, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2933, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2934, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2935, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2936, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2937, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2938, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2939, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2940, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2941, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2942, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2943, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2944, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2945, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2946, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=2947, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2948, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2949, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2950, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2951, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2952, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2953, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2954, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2955, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2956, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2957, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2958, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2959, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2960, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2961, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2962, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2963, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=2964, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2965, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2966, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2967, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2968, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2969, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2970, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=2971, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2972, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2973, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=2974, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2975, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2976, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2977, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2978, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2979, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=2980, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2981, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2982, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2983, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=2984, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2985, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=2986, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2987, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=2988, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=2989, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=2990, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=2991, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=2992, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=2993, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=2994, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=2995, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=2996, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=2997, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=2998, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=2999, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3000, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3001, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3002, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3003, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3004, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3005, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3006, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3007, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3008, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3009, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3010, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3011, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3012, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3013, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3014, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3015, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3016, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3017, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3018, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3019, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=3020, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=3021, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3022, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3023, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3024, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3025, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3026, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3027, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3028, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3029, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3030, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3031, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3032, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=3033, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3034, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3035, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3036, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3037, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3038, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3039, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3040, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3041, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3042, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3043, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3044, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3045, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3046, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3047, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3048, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3049, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3050, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3051, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3052, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3053, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3054, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3055, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3056, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3057, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3058, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153385', lineNo=3059, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3060, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3061, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3062, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3063, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3064, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3065, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3066, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3067, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3068, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3069, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3070, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3071, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3072, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3073, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3074, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3075, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3076, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3077, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3078, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3079, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234808', lineNo=3080, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3081, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3082, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3083, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082271', lineNo=3084, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3085, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3086, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3087, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3088, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3089, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3090, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3091, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3092, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3093, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3094, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3095, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3096, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3097, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3098, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3099, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3100, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3101, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3102, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3103, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3104, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3105, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3106, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3107, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=3108, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3109, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3110, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3111, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3112, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3113, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3114, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3115, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3116, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3117, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3118, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3119, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3120, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=3121, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3122, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3123, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3124, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3125, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3126, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3127, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3128, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3129, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3130, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3131, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3132, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082268', lineNo=3133, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3134, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314813', lineNo=3135, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3136, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3137, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3138, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3139, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3140, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3141, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3142, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082271', lineNo=3143, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3144, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3145, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3146, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3147, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3148, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3149, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3150, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=3151, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3152, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3153, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3154, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3155, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3156, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3157, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3158, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3159, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3160, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3161, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3162, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3163, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3164, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3165, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3166, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3167, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3168, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3169, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3170, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3171, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3172, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3173, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3174, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3175, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=3176, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3177, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3178, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3179, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3180, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3181, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3182, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082271', lineNo=3183, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3184, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3185, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3186, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3187, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3188, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3189, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3190, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3191, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3192, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3193, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3194, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3195, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3196, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082268', lineNo=3197, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3198, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314813', lineNo=3199, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3200, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3201, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3202, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3203, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3204, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234808', lineNo=3205, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3206, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3207, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3208, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082271', lineNo=3209, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3210, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3211, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3212, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3213, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3214, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3215, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3216, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3217, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=3218, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3219, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3220, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3221, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3222, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3223, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3224, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3225, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3226, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3227, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3228, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3229, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3230, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3231, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3232, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3233, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3234, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3235, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=3236, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=3237, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3238, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3239, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3240, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3241, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3242, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3243, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=3244, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3245, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3246, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3247, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3248, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3249, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3250, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082271', lineNo=3251, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3252, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153385', lineNo=3253, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3254, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3255, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3256, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3257, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3258, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3259, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3260, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3261, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3262, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3263, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3264, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082268', lineNo=3265, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314813', lineNo=3266, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3267, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3268, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3269, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3270, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3271, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3272, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3273, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3274, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3275, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3276, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3277, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3278, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082271', lineNo=3279, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3280, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3281, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3282, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3283, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3284, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3285, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3286, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3287, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=3288, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3289, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3290, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3291, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3292, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3293, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3294, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3295, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3296, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3297, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3298, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3299, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3300, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3301, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3302, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3303, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3304, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3305, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3306, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=3307, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122789', lineNo=3308, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3309, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3310, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3311, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3312, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3313, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3314, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3315, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3316, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3317, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3318, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3319, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3320, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3321, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082271', lineNo=3322, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3323, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3324, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658347', lineNo=3325, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153385', lineNo=3326, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3327, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3328, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3329, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3330, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3331, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3332, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3333, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3334, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3335, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082268', lineNo=3336, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3337, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314813', lineNo=3338, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3339, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3340, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3341, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3342, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3343, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3344, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3345, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3346, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3347, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234808', lineNo=3348, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3349, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3350, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3351, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3352, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3353, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3354, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3355, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3356, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3357, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=3358, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3359, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3360, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3361, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3362, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3363, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3364, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3365, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3366, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3367, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3368, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3369, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3370, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3371, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3372, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3373, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3374, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3375, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3376, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3377, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.59055808227', lineNo=3378, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3379, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3380, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3381, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3382, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3383, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3384, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.66706932949', lineNo=3385, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3386, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3387, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3388, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3389, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3390, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082271', lineNo=3391, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3392, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3393, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153385', lineNo=3394, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3395, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3396, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3397, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3398, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3399, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3400, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3401, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3402, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3403, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3404, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3405, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082268', lineNo=3406, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3407, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314813', lineNo=3408, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658345', lineNo=3409, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153383', lineNo=3410, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3411, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3412, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3413, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3414, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.6670693295', lineNo=3415, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3416, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3417, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234808', lineNo=3418, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3419, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3420, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082271', lineNo=3421, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.32637412279', lineNo=3422, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314815', lineNo=3423, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3424, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3425, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3426, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3427, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.92871457505', lineNo=3428, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.40708989314', lineNo=3429, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.7086528841', lineNo=3430, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.53184055696', lineNo=3431, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '3.13663234807', lineNo=3432, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.52302825744', lineNo=3433, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.78277245575', lineNo=3434, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.07602419326', lineNo=3435, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.590558082269', lineNo=3436, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.326374122788', lineNo=3437, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.283472314814', lineNo=3438, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.461852658346', lineNo=3439, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '0.861515153384', lineNo=3440, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '1.48245979993', lineNo=3441, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('GetHeight', '2.2319433752', lineNo=3442, ignoreOther=False)
    except TypeError as err:
        raise
    return 0

def runScenario(pipe_in=None, pipe_out=None, udpController=None):
    # Queue for getting scenario status
    log = Queue.Queue()
    if udpController:
        ground = Exercise_ground(log, name='Scenario')
        udpController.slots.append(ground.msq_q)
        ground.wait()
        udpController.slots.remove(ground.msg_q)
        return 0 # ground.status
    else:
    # Use old-style message queue
        poller = PollerThread()
        ground = Exercise_ground(log, name='Scenario')
        poller.slots.append(ground.msg_q)
        poller.start()
        ground.start()
        # Wait and log messages from both scenarii
        while True:
            try:
                scenario, severity, msg = log.get(block=False)
            except Queue.Empty:
                pass
            else:
                log.task_done()
                try:
                    # If called from the GUI, send log through pipe
                    pipe_out.send((scenario, severity, msg))
                except AttributeError:
                    print('[{level}] {name} - {msg}'.format
                        (level=severity, name=scenario, msg=msg))
                if severity == 'ERROR' or msg == 'END':
                    # Stop execution on first error or completed scenario
                    try:
                        pipe_out.send(('All', 'COMMAND', 'END'))
                    except AttributeError:
                        ground.stop()
                        poller.stop()
                        return
                try:
                    if pipe_out.poll():
                        cmd = pipe_out.recv()
                        if cmd == 'STOP':
                            ground.stop()
                            poller.stop()
                            return
                except AttributeError:
                    pass


if __name__ == "__main__":
    signal.signal(signal.SIGINT, signal.SIG_DFL)
    udpController = None
    if '--udp' in sys.argv:
        # Create UDP Controller with default IP/Port values (127.0.0.1:7755:7756)
        udpController = tasteUDP()
    QCoreApplication(sys.argv)
    sys.exit(runScenario(udpController))
